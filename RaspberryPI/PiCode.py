import pygame
import subprocess
import time

if __name__ == '__main__':
    ip = '192.168.4.116'
    # ip = input("IP-Adresse de Controllers eingeben:")
    print("IP {} ausgewählt.".format(ip))
    message = 'RETTUNGSGASSE+BILDEN!'
    # message = input("Geben sie die anzuzeigende Nachricht ein: ")
    print("Deine Nachricht: {}".format(message))
    bashCommand = 'curl -H "User-Agent:" -H "Host:" http://{}/setLight=GREEN'.format(ip)
    process = subprocess.Popen(bashCommand.split(), stdout=subprocess.PIPE)
    bashCommand = 'curl -H "User-Agent:" -H "Host:" http://{}/setText={}'.format(ip, message)
    process = subprocess.Popen(bashCommand.split(), stdout=subprocess.PIPE)
    output, error = process.communicate()
    pygame.mixer.init()
    while 1:
        pygame.mixer.music.load("de_rettungsgasse_final.wav")
        pygame.mixer.music.play()
        while pygame.mixer.music.get_busy():
            continue
        pygame.mixer.music.load("en_rettungsgasse_final.wav")
        pygame.mixer.music.play()
        while pygame.mixer.music.get_busy():
            continue
        time.sleep(2)
