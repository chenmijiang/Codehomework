import React from 'react'

const LazyLoading = ({ children, animation }) => {
  return (
    <React.Suspense fallback={animation ? animation : <div>loading...</div>}>
      {children}
    </React.Suspense>
  )
}

export default LazyLoading
