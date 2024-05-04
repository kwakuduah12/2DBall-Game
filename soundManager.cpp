#include "soundManager.h"

SoundManager::SoundManager() {}

SoundManager::~SoundManager() {
    // Destructor: Resources are managed by SFML, which uses RAII for cleanup
}

void SoundManager::loadSoundEffect(const std::string& name, const std::string& filename) {
    sf::SoundBuffer buffer;
    if (buffer.loadFromFile(filename)) {
        soundBuffers[name] = buffer;
        sf::Sound sound;
        sound.setBuffer(soundBuffers[name]);
        sounds[name] = sound;
    }
}

void SoundManager::playSoundEffect(const std::string& name) {
    if (sounds.find(name) != sounds.end()) {
        sounds[name].play();
    }
}

void SoundManager::loadMusic(const std::string& filename) {
    music.openFromFile(filename);
}

void SoundManager::playMusic() {
    music.play();
}

void SoundManager::stopMusic() {
    music.stop();
}

void SoundManager::setMusicLoop(bool loop) {
    music.setLoop(loop);
}
