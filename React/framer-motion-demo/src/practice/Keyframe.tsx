import React, { useState } from 'react'
import { AnimatePresence, motion } from 'framer-motion'

function Keyframe() {
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
            initial={{ opacity: 0 }}
            animate={{ opacity: [0, 1, 0, 1] }}
            transition={{ duration: 5, times: [0, 0.2, 0.3, 1] }}
            exit={{ opacity: 0 }}
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

export default Keyframe
