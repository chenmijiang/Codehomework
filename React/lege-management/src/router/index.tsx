import { lazy } from 'react'
import { Navigate, useRoutes } from 'react-router-dom'

// import Home from '@/views/Home'
// import About from '@/views/About'

const baseRouter = () =>
  useRoutes([
    {
      path: '/',
      element: <Navigate to="/home" />,
    },
    {
      path: '/about',
      element: () => lazy(() => import('@/views/About')),
    },
    {
      path: '/home',
      element: <Home />,
    },
  ])

export default baseRouter
