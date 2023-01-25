import React from 'react'
import { Outlet, NavLink } from 'react-router-dom'

const Home = () => {
  return (
    <div>
      Home
      {/* 路由跳转 */}
      <NavLink to="/about">About | </NavLink>
      {/* 相对路径跳转 */}
      <NavLink to="child1">child1 | </NavLink>
      <NavLink to="child2">child2</NavLink>
      {/* 嵌套路由 */}
      <Outlet />
    </div>
  )
}

export default Home
