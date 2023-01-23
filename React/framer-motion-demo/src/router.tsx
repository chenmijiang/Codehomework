import React, { lazy } from 'react'
import { useRoutes } from 'react-router-dom'

function Router() {
  return useRoutes([
    {
      path: '/',
      // Component: lazy(() => import('./views/root')),
      // redirect: '/designdraft',
      children: [
        {
          path: 'designdraft',
          // Component: lazy(() => import('./views/designdraft/index')),
        },
        {
          path: 'code',
          // Component: lazy(() => import('./views/code/index')),
          children: [],
        },
      ],
    },
  ])
}

export default Router
