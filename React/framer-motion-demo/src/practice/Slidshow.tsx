import React, { useState } from 'react'
import { motion, AnimatePresence, Variants } from 'framer-motion'
import { wrap } from '@popmotion/popcorn'

const COLORS = ['red', 'blue', 'black', 'purple', 'green']

const variants: Variants = {
  enter: (direction) => ({ opacity: 0, x: direction > 0 ? 1000 : -1000 }),
  center: { opacity: 1, x: 0 },
  exit: (direction) => ({ opacity: 0, x: direction > 0 ? -1000 : 1000 }),
}

function Slidshow() {
  const [[page, direction], setPage] = useState([0, 0])

  const paginate = (direction: number) => {
    setPage([direction + page, direction])
  }
  const index = wrap(0, COLORS.length, page)

  return (
    <div
      style={{
        position: 'relative',
        top: 0,
        left: 0,
      }}
    >
      <AnimatePresence custom={direction}>
        <motion.div
          custom={direction}
          key={page}
          variants={variants}
          initial="enter"
          animate="center"
          exit="exit"
          style={{
            height: 400,
            width: 400,
            backgroundColor: COLORS[index],
            position: 'absolute',
            top: 0,
            left: 0,
          }}
          drag="x"
          dragConstraints={{ left: 0, right: 0 }}
          dragElastic={1}
          onDragEnd={(e, { offset, velocity }) => {
            if (offset.x > 200) {
              paginate(-1)
            } else if (offset.x < -200) {
              paginate(1)
            }
          }}
        />
        <div style={{ zIndex: 10, position: 'absolute' }}>
          <button
            onClick={() => {
              paginate(-1)
            }}
          >
            {'<'}
          </button>
          <button
            onClick={() => {
              paginate(1)
            }}
          >
            {'>'}
          </button>
        </div>
      </AnimatePresence>
    </div>
  )
}

export default Slidshow
