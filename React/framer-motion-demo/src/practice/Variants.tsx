import React, { useState } from 'react'
import { AnimatePresence, motion, Variants } from 'framer-motion'

// type Props = {
//   isToggled: boolean
//   setToggle: React.MouseEventHandler<HTMLButtonElement>
//   children: any
// }

const variants: Variants = {
  open: { opacity: 1, height: 'auto' },
  close: { opacity: 0, height: 0 },
}

function VariantsT() {
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
            initial="close"
            animate="open"
            exit="close"
            variants={variants}
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

export default VariantsT
