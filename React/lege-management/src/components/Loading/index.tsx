import React, { ReactElement, Suspense } from 'react'

type Props = {
  loadingAnimation?: ReactElement
  children: ReactElement | ReactElement[]
}

const Loading = ({ children, loadingAnimation }: Props) => {
  return (
    <Suspense fallback={loadingAnimation ?? <div>loading...</div>}>
      {children}
    </Suspense>
  )
}

export default Loading
