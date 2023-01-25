import React, { useCallback } from 'react'
import { useSelector, useDispatch } from 'react-redux'

const About = () => {
  const count = useSelector((state) => state.count)
  const dispatch = useDispatch()
  const addCount = useCallback(() => {
    dispatch({
      type: 'add',
      count: count + 1,
    })
  }, [count,dispatch])
  return (
    <div>
      About - {count}
      <button onClick={addCount}>+ add count</button>
    </div>
  )
}

// const mapStateToProps = (state) => ({
//   count: state.count,
// })

// const mapDispatchToProps = (dispatch) => {
//   return {
//     addCount: () => dispatch({ type: 'add', count: 1 }),
//   }
// }

// export default connect(mapStateToProps, mapDispatchToProps)(About)

export default About
