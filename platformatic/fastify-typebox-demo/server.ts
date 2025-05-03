import { randomUUID } from 'node:crypto';

import Fastify from 'fastify';
import { Type, type TypeBoxTypeProvider } from '@fastify/type-provider-typebox'

export async function buildServer({ port = 3000, host = '0.0.0.0' } = {}) {
    const fastify = Fastify({
        logger: true
    }).withTypeProvider<TypeBoxTypeProvider>();
    // Define TypeBox schema for request validation
    const User = Type.Object({
        name: Type.String(),
        email: Type.String({ format: 'email' }),
        age: Type.Number({ minimum: 0 }),
        preferences: Type.Optional(Type.Object({
            newsletter: Type.Boolean(),
            theme: Type.Union([
                Type.Literal('light'), Type.Literal('dark')
            ])
        }))
    });
    // Route with TypeBox validation
    fastify.post('/users', {
        schema: {
            body: User
        }
    }, async (request, reply) => {
        const user = request.body;
        // TypeScript knows user's shape thanks to TypeBox
        return {
            message: `Created user ${user.name}`,
            userId: randomUUID()
        };
    });
    // Start server with graceful shutdown
    try {
        await fastify.listen({ port, host });
    } catch (err) {
        fastify.log.error(err);
        process.exit(1);
    }
    return fastify;
}

await buildServer()