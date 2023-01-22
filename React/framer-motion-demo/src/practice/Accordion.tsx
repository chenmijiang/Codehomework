import React, { useState } from 'react'
import { AnimatePresence, motion } from 'framer-motion'

// type Props = {
//   isToggled: boolean
//   setToggle: React.MouseEventHandler<HTMLButtonElement>
//   children: any
// }

function Accordion() {
  const [isToggled, setIsToggled] = useState(false)
  return (
    <article>
      <h2
        role="button"
        onClick={() => setIsToggled(!isToggled)}
      >
        The Heading
      </h2>
      <AnimatePresence>
        {isToggled && (
          <motion.div
            style={{ overflow: 'hidden' }}
            initial={{ opacity: 0, height: 0 }}
            animate={{ opacity: 1, height: 'auto' }}
            exit={{ opacity: 0, height: 0 }}
          >
            <p>
              Lorem ipsum dolor sit, amet consectetur adipisicing elit. Itaque
              excepturi in quo vel vero unde sunt velit? Voluptas sequi commodi
              aperiam sapiente magni nisi dolorem, officiis ullam, in culpa
              quidem.
            </p>
          </motion.div>
        )}
      </AnimatePresence>
    </article>
  )
}

export default Accordion
