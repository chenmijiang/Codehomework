import React from 'react';
import { Navigate, useRoutes } from 'react-router-dom'

import LazyLoading from '@/components/LazyLoading';

const Home = React.lazy(() => import('@/views/Home'))
const About = React.lazy(() => import('@/views/About'))
const HomeChild1 = React.lazy(() => import('@/views/HomeChild1'))
const HomeChild2 = React.lazy(() => import('@/views/HomeChild2'))
const Artcle = React.lazy(() => import('@/views/Artcle'))

const BaseRouter = () => useRoutes([
  {
    path: '/',
    element: <Navigate to="/home" />
  },
  {
    path: '/home',
    element: <LazyLoading><Home /></LazyLoading>,
    children: [
      {
        // path: 'child1',
        element: <LazyLoading><HomeChild1 /></LazyLoading>,
        index: true,
      },
      {
        path: 'child2',
        element: <LazyLoading><HomeChild2 /></LazyLoading>
      }
    ]
  },
  {
    path: '/artcle/:aid',
    element: <LazyLoading><Artcle /></LazyLoading>
  },
  {
    path: '/about',
    element: <LazyLoading><About /></LazyLoading>
  }
])

export default BaseRouter
