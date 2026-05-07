/*
  For the audioplayer to work, a micro-sd card must be
  inserted fortmatted with FAT32
*/

#include <MeMCore.h>
#include <MeAudioPlayer.h>

MeAudioPlayer AudioPlayer;

void setup() {
    AudioPlayer.PlayerInit();
    AudioPlayer.stopRecording();
    AudioPlayer.stopMusic();
    AudioPlayer.setMusicPlayMode(0);
    // set volume to 80%
    AudioPlayer.setMusicVolume(80);
    // play the first file on the micro-SD card
    AudioPlayer.playMusicFileIndex(1);
    delay(10000);
    
    AudioPlayer.stopMusic();
}

void loop() {
}
