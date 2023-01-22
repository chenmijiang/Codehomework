import { motion } from 'framer-motion'
import React, { useState } from 'react'

import './LayoutAnimations.css'

const spring = {
  type: 'spring',
  stiffness: 700,
  damping: 30,
}

function LayoutAnimations() {
  const [isOn, setIsOn] = useState(false)
  const toggleSwitch = () => {
    setIsOn(!isOn)
  }
  return (
    <div
      className="switch"
      data-ison={isOn}
      onClick={toggleSwitch}
    >
      <motion.div
        className="handle"
        layout
        transition={spring}
      />
    </div>
  )
}

export default LayoutAnimations
