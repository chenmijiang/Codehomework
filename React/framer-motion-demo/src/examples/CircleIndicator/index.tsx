import React from 'react'

import './CircleIndicator.css'

import { LoremIpsum } from '../../components/LoremIpsum'
import { motion, useScroll, useSpring } from 'framer-motion'

function CircleIndicator() {
  let { scrollYProgress } = useScroll()
  const scaleX = useSpring(scrollYProgress, {
    stiffness: 100,
    damping: 30,
    restDelta: 0.001
  });
  return (
    <>
      <motion.div
        className="progress-bar"
        style={{ scaleX }}
      />
      <h1>
        <code>useScroll</code> with spring smoothing
      </h1>
      <LoremIpsum />
    </>
  )
}

export default CircleIndicator
