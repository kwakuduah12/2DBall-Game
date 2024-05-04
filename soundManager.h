#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include <SFML/Audio.hpp>
#include <map>
#include <string>

class SoundManager {
public:
    SoundManager();
    ~SoundManager();

    void loadSoundEffect(const std::string& name, const std::string& filename);
    void playSoundEffect(const std::string& name);

    void loadMusic(const std::string& filename);
    void playMusic();
    void stopMusic();
    void setMusicLoop(bool loop);

private:
    std::map<std::string, sf::SoundBuffer> soundBuffers;
    std::map<std::string, sf::Sound> sounds;
    sf::Music music;
};

#endif // SOUNDMANAGER_H
