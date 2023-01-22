import React from 'react'

import styled from 'styled-components'

import './assets/styles/reset.css'

// import Variants from './examples/Variants'
// import GestureAnimations from './examples/GestureAnimations'
// import MotionValues from './examples/MotionValues/MotionValues'
// import ScrollTriggeredAnimations from './examples/ScrollTriggeredAnimations'
// import CircleIndicator from './examples/CircleIndicator'
// import ExitAnimations from './examples/ExitAnimations'
// import LayoutAnimations from './examples/LayoutAnimations'
// import SharedLayoutAnimations from './examples/SharedLayoutAnimations'
import Modal from './practice/Modal'

// import UploadBox from './views/UploadBox'

function App() {
  return (
    <AppBody>
      <Modal />
    </AppBody>
  )
}

const AppBody = styled.div`
  width: 100%;
  height: 100vh;
  display: flex;
  justify-content: center;
  align-items: center;
`

export default App
