import React from 'react'
import { motion, Variants } from 'framer-motion'
import styled from 'styled-components'

type Prop = {
  isNavOpen: boolean
  setIsNavOpen: Function
}

const variants: Variants = {
  open: { opacity: 1, x: 0 },
  closed: { opacity: 0, x: '-100%' },
}

const ulVariants: Variants = {
  open: {
    scale: 1.05,
    transition: {
      staggerChildren: 0.3,
      delayChildren: 0.2,
      staggerDirection: 1,    // 1 : forwards and -1 : backwards
      when: 'afterChildren', // 'afterChildren' or 'beforeChildren'
    },
  },
  closed: {
    scale: 1,
  },
}

const liVariants: Variants = {
  open: { y: 0 },
  closed: { y: -50 },
}

export default function Nav({ isNavOpen, setIsNavOpen }: Prop) {
  return (
    <MenuNav
      variants={variants}
      initial="closed"
      animate={isNavOpen ? 'open' : 'closed'}
      transition={{ damping: 300 }}
    >
      <button onClick={() => {}}>close</button>
      <ul>
        <li>
          <a href="#">One</a>
        </li>
        <li>
          <a href="#">Two</a>
        </li>
        <li>
          <a href="#">Three</a>
        </li>
        <li>
          <a href="#">Four</a>
        </li>
      </ul>
    </MenuNav>
  )
}

const MenuNav = styled(motion.nav)`
  position: fixed;
  top: 0;
  left: 0;
  width: 100vw;
  height: 100vh;
  background-color: black;
  padding: 40px;
  ul {
    list-style: none;
    padding: 0;
    margin: 0;
  }
  li {
    padding: 0;
    margin: 0;
    a {
      color: white;
    }
  }
`
