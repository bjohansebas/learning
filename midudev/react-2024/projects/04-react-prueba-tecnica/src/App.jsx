import { useEffect, useState } from 'react'

const CAT_PREFIX_IMAGE_URL = 'https://cataas.com/cat/says/'

export default function App() {
  const [fact, setFact] = useState()
  const [words, setWords] = useState()

  useEffect(() => {
    fetch('https://catfact.ninja/fact')
      .then((res) => res.json())
      .then((data) => setFact(data.fact))
  }, [])

  useEffect(() => {
    if (fact) {
      const threeWords = fact.split(' ', 3).join(' ')

      setWords(threeWords)
    }
  }, [fact])

  return (
    <main>
      {fact && <p>{fact}</p>}
      {words && (
        <img
          width={300}
          height={300}
          src={`${CAT_PREFIX_IMAGE_URL}/${words}`}
          // biome-ignore lint/a11y/noRedundantAlt: <explanation>
          alt="Image extracted using the first three words"
        />
      )}
    </main>
  )
}
