import './App.css'
import { TwitterFollowCard } from './TwitterFollowCard'


export function App(){
    return <section className='App'>
    <TwitterFollowCard userName={"midudev"} name="Miguel Angel" isFollowing={false}/>
    <TwitterFollowCard userName={"bjohansebas"} name="Sebastian Beltran" isFollowing/>

    </section>
}