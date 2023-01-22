import React from 'react'
import { AnimatePresence } from 'framer-motion'

type Props = {
  isToggled: boolean
  setToggle: React.MouseEventHandler<HTMLButtonElement>
  children: any
}

function ProjectModal({ isToggled, setToggle, children }: Props) {
  return (
    <AnimatePresence>
      {isToggled && (
        <>
          <div>
            <button onClick={setToggle}>Close</button>
            {children}
          </div>
        </>
      )}
    </AnimatePresence>
  )
}

export default ProjectModal
