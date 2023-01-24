import React, { lazy } from 'react'
import { Navigate, useRoutes } from 'react-router-dom'

// import Home from '@/views/Home'
// import About from '@/views/About'
import Loading from '@/components/Loading'
import Page1 from '@/views/Page1'
const Home = lazy(() => import('@/views/Home'))
const About = lazy(() => import('@/views/About'))

const baseRouter = () =>
  useRoutes([
    {
      path: '/',
      element: <Navigate to="/home" />,
    },
    {
      path: '/',
      element: <Home />,
      children: [
        {
          path: '/page1',
          element: (
            <Loading>
              <Page1 />
            </Loading>
          ),
        },
      ],
    },
    {
      path: '/about',
      element: (
        <Loading>
          <About />
        </Loading>
      ),
    },
    {
      path: '/home',
      element: (
        <Loading>
          <Home />
        </Loading>
      ),
    },
  ])

export default baseRouter
