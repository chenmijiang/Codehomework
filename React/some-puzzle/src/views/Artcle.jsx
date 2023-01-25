import React from 'react'
import { useLocation, useSearchParams, useParams } from 'react-router-dom'

const Artcle = () => {
  console.log('location', useLocation())
  console.log('useSearchParams', useSearchParams())
  // console.log('useParams', useParams())
  const { aid } = useParams()
  return <div>Artcle {aid}</div>
}

export default Artcle
