export const Square = ({ children, isSelected, updateBoard, index }) => {
  const className = `square ${isSelected ? 'is-selected' : ''}`

  const handleClick = () => {
    updateBoard(index)
  }
  return (
    // biome-ignore lint/a11y/useKeyWithClickEvents: <explanation>
    <div onClick={handleClick} className={className}>
      {children}
    </div>
  )
}
