import React from 'react'
import { motion } from 'framer-motion'

import './Animation.css'

function Animation() {
  return (
    <motion.div
      className="ball"
      initial={{ opacity: 0, scale: 0.5 }}
      animate={{ opacity: 1, scale: 1 }}
      transition={{ duration: 1 }}
    >
      <p
        style={{
          textAlign: 'center',
          lineHeight: '100px',
        }}
      >
        Animation
      </p>
    </motion.div>
  )
}

export default Animation
