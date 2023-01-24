import { Button } from 'antd'
import { HashRouter as Router } from 'react-router-dom'
import IndexRoutes from '@/router'
function App() {
  return (
    <Router>
      <IndexRoutes></IndexRoutes>
    </Router>
  )
}

export default App
