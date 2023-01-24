import React from 'react'
import ReactDOM from 'react-dom/client'
// 初始化样式
// 样式初始化一般放在最前面
// import 'reset-css'
import '@/assets/styles/reset.scss'
// UI 框架的样式

// 全局样式
import '@/assets/styles/global.scss'
// 组件样式

import App from '@/App'

ReactDOM.createRoot(document.getElementById('root') as HTMLElement).render(
  <React.StrictMode>
    <App/>
  </React.StrictMode>
)
