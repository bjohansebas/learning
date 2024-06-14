import confetti from 'canvas-confetti'
import { useState } from 'react'
import { Square } from './components/Square'
import { TURNS } from './constants'
import { checkEndGame, checkWinner } from './functions/board'

function App() {
  const [board, setBoard] = useState(() => {
    const boardFromStorage = window.localStorage.getItem('board')

    if (boardFromStorage) return JSON.parse(boardFromStorage)

    return Array(9).fill(null)
  })
  const [turn, setTurn] = useState(() => {
    const turnFromStorage = window.localStorage.getItem('turn')

    if (turnFromStorage) return JSON.parse(turnFromStorage)

    return TURNS.X
  })
  const [winner, setWinner] = useState(null)

  const resetGame = () => {
    setBoard(Array(9).fill(null))
    setTurn(TURNS.X)
    setWinner(null)

    window.localStorage.removeItem('board')
    window.localStorage.removeItem('turn')
  }

  const updateBoard = (index) => {
    if (board[index] || winner) return

    const newBoard = [...board]
    newBoard[index] = turn
    setBoard(newBoard)

    const newTurn = turn === TURNS.X ? TURNS.O : TURNS.X
    setTurn(newTurn)

    window.localStorage.setItem('board', JSON.stringify(newBoard))
    window.localStorage.setItem('turn', JSON.stringify(newTurn))

    const newWinner = checkWinner(newBoard)
    if (newWinner) {
      confetti()
      setWinner(newWinner)
    } else if (checkEndGame(newBoard)) {
      setWinner(false)
    }
  }

  return (
    <main className="board">
      <h1>Tic tac toe</h1>
      <button type="button" onClick={resetGame}>
        Reset del juego
      </button>
      <section className="game">
        {board.map((_, index) => {
          return (
            // biome-ignore lint/suspicious/noArrayIndexKey: <explanation>
            <Square key={index} index={index} updateBoard={updateBoard}>
              {board[index]}
            </Square>
          )
        })}
      </section>
      <section className="turn">
        <Square isSelected={turn === TURNS.X}>{TURNS.X}</Square>
        <Square isSelected={turn === TURNS.O}>{TURNS.O}</Square>
      </section>
      {winner !== null && (
        <section className="winner">
          <div className="text">
            <h2>{winner === false ? 'Empate' : 'Ganó:'}</h2>
            <header className="win">{winner && <Square>{winner}</Square>}</header>
            <footer>
              <button onClick={resetGame} type="button">
                Empezar de nuevo
              </button>
            </footer>
          </div>
        </section>
      )}
    </main>
  )
}

export default App
