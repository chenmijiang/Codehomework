// 组件的写法
import { HashRouter, Navigate, Route, Routes } from 'react-router-dom'

import App from '@/App'
import Home from '@/views/Home'
import About from '@/views/About'

const baseRouter = () => (
  <HashRouter>
    <Routes>
      <Route
        path="/"
        element={<App />}
      >
        <Route
          path="/"
          element={<Navigate to="/home" />}
        />
        <Route
          path="about"
          element={<About />}
        ></Route>
        <Route
          path="home"
          element={<Home />}
        ></Route>
      </Route>
    </Routes>
  </HashRouter>
)

export default baseRouter
