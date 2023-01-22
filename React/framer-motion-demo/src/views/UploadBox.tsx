import { motion } from 'framer-motion'
import React from 'react'
import styled from 'styled-components'

export default function UploadBox() {
  return (
    <BoxContain
      initial={{
        opacity: 0,
        scale: 0,
      }}
      animate={{
        scale: 1,
        opacity: 1,
      }}
      transition={{
        type: 'spring',
        duration: 4,
        bounce: 0.3,
        damping: 20,
      }}
    >
      <div
        className="upload_close"
        onClick={() => {}}
      ></div>
      {/* <div className={Style.upload_box_contain}>
        <div className={Style.way_change_contain}>
          <div className={[Style.file, Style.music].join(' ')}>
            <div className={Style.music_way}>
              <div className={Style.upload_file}>
                <i
                  className={[
                    Style.upload_icon,
                    uploadMusiced ? Style.upload_success : '',
                  ].join(' ')}
                ></i>
                <input
                  id="music-file"
                  type="file"
                  title="music-file"
                  accept="audio/*"
                  onChange={(evt) => {}}
                />
              </div>
              <div className={Style.file_des}>
                <label htmlFor="music-file">音频上传: 支持mp3、wav、flac</label>
              </div>
            </div>
          </div>
        </div>
        <div className={[Style.file, Style.lyrics].join(' ')}>
          <div className={Style.upload_file}>
            <i
              className={[
                Style.upload_icon,
                uploadLyricsed ? Style.upload_success : '',
              ].join(' ')}
            ></i>
            <input
              id="lyrics-file"
              type="file"
              title="lyrics file"
              accept="text/*"
              onChange={(evt) => {
                handleLyricsFileChange(evt.target)
              }}
            />
          </div>
          <div className={Style.file_des}>
            <label htmlFor="lyrics-file">歌词上传(utf8): 支持txt、text</label>
            <p>歌词每句一行，分段空一行</p>
          </div>
        </div>
        <button
          className={Style.upload_button}
          onClick={() => {
            handleUploadClick()
          }}
        >
          上传
        </button>
      </div> */}
    </BoxContain>
  )
}

const BoxContain = styled(motion.div)`
  width: 350px;
  height: 250px;
  background-color: rgb(228 228 228 / 70%);
  border-radius: 10px;
  z-index: 20;
  overflow: hidden;
  animation: scale 0.2s ease-out 1 forwards;

  .upload_close {
    width: 20px;
    height: 20px;
  }
`
