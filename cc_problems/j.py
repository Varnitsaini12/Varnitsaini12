import pyttsx3
import speech_recognition as sr

Assistant = pyttsx3.init('sapi5')

voices = Assistant.getProperty('voices')



def speak(audio):
    print(" ")
    Assistant.say(audio)
    print(" ")
    Assistant.runAndWait()



def takeCommand():
    command  = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        command.pause_threshold = 1
        audio = command.listen(source)
        
        try:
            print("Recognizing...")
            query = command.recognize_google(audio,language='en-in')
            print("You said : {}".format(query))
        except Exception as Error:
            return "none"

        return query.lower()
            

query = takeCommand()    

if "hello" in query:  
    speak("Hello I am Jarvis")  
else:
    speak("no command")    
        

