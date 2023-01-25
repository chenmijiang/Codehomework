// import {createStore} from 'redux'
import { configureStore } from '@reduxjs/toolkit'

const initalState = {
  count: 0,
}

const reducer = (preState, action) => {
  let newState = JSON.parse(JSON.stringify(preState))

  switch (action.type) {
    case 'add':
      newState = {
        ...newState,
        count: preState.count + action.count,
      }
      break
    default:
  }
  return newState
}

const store = configureStore({ reducer, preloadedState: initalState })

export default store
