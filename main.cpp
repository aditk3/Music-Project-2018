//Add "winmm" linker in compiler settings

#include <iostream>
#include <windows.h>
#include <MMsystem.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

//*Classes:
class day
{
    int hours;
    char prac[50];
public:
    void getinfo()
    {
        cin >> hours;
        cout << "hello\n";
        gets(prac);
    }
};
class month : public day
{
    int day_count;
    day d[31];
    char MName[10], user_name[30];
public:
    int set_day_count(char MName[10]);
    void getdata();
};

void month :: getdata()
{
    cout << "Enter user name\n\n";
    gets(user_name);
    cout << "\nEnter month name\n\n";
    gets(MName);
    day_count = set_day_count(MName);
}

int month :: set_day_count(char MName[10])
{
        if (strcmp(MName, "January") == 0 || strcmp(MName, "january") == 0)
            return 31;
    else
        if (strcmp(MName, "February") == 0 || strcmp(MName, "february") == 0)
            return 28;
    else
        if (strcmp(MName, "March") == 0 || strcmp(MName, "march") == 0)
            return 31;
    else
        if (strcmp(MName, "April") == 0 || strcmp(MName, "april") == 0)
            return 30;
    else
        if (strcmp(MName, "May") == 0 || strcmp(MName, "may") == 0)
            return 31;
    else
        if (strcmp(MName, "June") == 0 || strcmp(MName, "june") == 0)
            return 30;
    else
        if (strcmp(MName, "July") == 0 || strcmp(MName, "july") == 0)
            return 31;
    else
        if (strcmp(MName, "August") == 0 || strcmp(MName, "august") == 0)
            return 31;
    else
        if (strcmp(MName, "September") == 0 || strcmp(MName, "september") == 0)
            return 30;
    else
        if (strcmp(MName, "October") == 0 || strcmp(MName, "october") == 0)
            return 31;
    else
        if (strcmp(MName, "November") == 0 || strcmp(MName, "november") == 0)
            return 30;
    else
        if (strcmp(MName, "December") == 0 || strcmp(MName, "december") == 0)
            return 31;
    else
        return 0;
}

//Functions:

void invalidchoice()
{
    system("cls");
    cout << "Invalid choice\n";
    Sleep((2000));
}

void playchord(char a)
{
    switch (a)
    {
    case 'a':
        {
            PlaySound(TEXT("Piano Chords\\C\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'A':
        {
            PlaySound(TEXT("Piano Chords\\C\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'b':
        {
            PlaySound(TEXT("Piano Chords\\Cs\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'B':
        {
            PlaySound(TEXT("Piano Chords\\Cs\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'c':
        {
            PlaySound(TEXT("Piano Chords\\D\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'C':
        {
            PlaySound(TEXT("Piano Chords\\D\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'd':
        {
            PlaySound(TEXT("Piano Chords\\Ds\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'D':
        {
            PlaySound(TEXT("Piano Chords\\Ds\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'e':
        {
            PlaySound(TEXT("Piano Chords\\E\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'E':
        {
            PlaySound(TEXT("Piano Chords\\E\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'f':
        {
            PlaySound(TEXT("Piano Chords\\F\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'F':
        {
            PlaySound(TEXT("Piano Chords\\F\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'g':
        {
            PlaySound(TEXT("Piano Chords\\Fs\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'G':
        {
            PlaySound(TEXT("Piano Chords\\Fs\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'h':
        {
            PlaySound(TEXT("Piano Chords\\G\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'H':
        {
            PlaySound(TEXT("Piano Chords\\G\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'i':
        {
            PlaySound(TEXT("Piano Chords\\Gs\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'I':
        {
            PlaySound(TEXT("Piano Chords\\Gs\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'j':
        {
            PlaySound(TEXT("Piano Chords\\A\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'J':
        {
            PlaySound(TEXT("Piano Chords\\A\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'k':
        {
            PlaySound(TEXT("Piano Chords\\As\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'K':
        {
            PlaySound(TEXT("Piano Chords\\As\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'l':
        {
            PlaySound(TEXT("Piano Chords\\B\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'L':
        {
            PlaySound(TEXT("Piano Chords\\B\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    }
}

void playnote(char a)
{
    switch (a) //Play keyboard
    {
    case 'a':
        {
            PlaySound(TEXT("Notes\\Piano\\C1.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'w':
        {
            PlaySound(TEXT("Notes\\Piano\\Cs1.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 's':
        {
            PlaySound(TEXT("Notes\\Piano\\D1.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'e':
        {
            PlaySound(TEXT("Notes\\Piano\\Ds1.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'd':
        {
            PlaySound(TEXT("Notes\\Piano\\E1.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'f':
        {
            PlaySound(TEXT("Notes\\Piano\\F1.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 't':
        {
            PlaySound(TEXT("Notes\\Piano\\Fs1.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'g':
        {
            PlaySound(TEXT("Notes\\Piano\\G1.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'y':
        {
            PlaySound(TEXT("Notes\\Piano\\Gs1.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'h':
        {
            PlaySound(TEXT("Notes\\Piano\\A1.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'u':
        {
            PlaySound(TEXT("Notes\\Piano\\As1.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'j':
        {
            PlaySound(TEXT("Notes\\Piano\\B1.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'k':
        {
            PlaySound(TEXT("Notes\\Piano\\C2.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'o':
        {
            PlaySound(TEXT("Notes\\Piano\\Cs2.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    case 'l':
        {
            PlaySound(TEXT("Notes\\Piano\\D2.wav"), NULL, SND_FILENAME | SND_ASYNC);
            break;
        }
    }
}

int main()
{
    //Accessible to all:
    int counterMTL = 0, counterCW = 0;
    char swChordPrev, swChordRec;
    string ChordRecName, MelodyRecName;
    mainmenu:
        {
            system("cls");
            char opMM;
            cout << "*-*-*-*-*-*\nMUSIC MANIA\n*-*-*-*-*-*\n\n";
            cout << "1. Musical Typing\n";
            cout << "2. Chord Writing\n";
            cout << "3. Utilities\n";
            cout << "4. Practice Calender\n";
            cout << "5. Exit\n\n";
            opMM = getch();
            switch (opMM)
            {
                case '1' : goto MType;
                case '2' : goto ChordsM;
                case '3' : goto Utilities;
                case '4' : goto Tracker;
                case '5' : exit(0);
                default :
                    {
                        invalidchoice();
                        goto mainmenu;
                    }
            };
        }
    Tracker:
        {
            system("cls");
            int a;
            month m;
            char ch;
            cout << "*-*-*-*-*-*-*-*-*\nPRACTICE CALENDER:\n*-*-*-*-*-*-*-*-*\n\n";
            m.getdata();
            m.getinfo();
            cin.get(ch);
            cin >> a;
        }
    Utilities:
        {
            system("cls");
            cout << "*-*-*-*-*\nUTILITIES:\n*-*-*-*-*\n\n";
        }
    ChordsM:
        {
            int opChordsM;
            system("cls");
            cout << "*-*-*-*-*-*-*\nCHORD WRITING:\n*-*-*-*-*-*-*\n\n";
            cout << "1. Preview\n";
            cout << "2. Write\n";
            cout << "3. Load chord progressions\n";
            cout << "4. Main Menu\n\n";
            opChordsM = getch();
            switch (opChordsM)
            {
            case '1':
                goto ChordsPrev;
            case '2':
                goto ChordsWrite;
            case '3':
                goto ChordLoad;
            case '4':
                goto mainmenu;
            default:
                {
                    invalidchoice();
                    goto ChordsM;
                }
            }
        }
    ChordsWrite:
        {
            char temp = '$';
            double bpm;
            ofstream writechords ("CHORDS.DAT", ios :: app);
            ofstream writechordnames ("CHORDRECORDINGS.DAT", ios :: app);
            ofstream writelength ("CHORDLENGTHS.DAT", ios :: app);
            ofstream storebpm ("BPM.DAT", ios :: app);
            system("cls");
            cout << "Enter BPM (beats per minute)\n";
            cin >> bpm;
            writelength << '$';
            writechordnames << '$';
            writechords << '$';
            storebpm << '$';
            storebpm.write((char*)&bpm, sizeof(bpm));
            writechords.close();
            writelength.close();
            writechordnames.close();
            goto ChordRec;
        }
    ChordRec:
        {
            system("cls");
            int opChordsWrite;
            double chordlength;
            char chord;
            ofstream recordchords ("CHORDS.DAT", ios :: app);
            ofstream recordchordnames ("CHORDRECORDINGS.DAT", ios :: app);
            ofstream recordlength ("CHORDLENGTHS.DAT", ios :: app);
            cout << "Choose a root note:\n\n";
            cout << "1. C\n2. C#\n3. D\n4. D#\n5. E\n6. F\n7. F#\n8. G\n9. G#\n10. A\n11. A#\n12. B\n\n";
            cout << "or type '0' to save and exit\n\n";
            cin >> opChordsWrite;
            switch (opChordsWrite)
            {
            case 1:
                {
                    system("cls");
                    cout << "C\n\n";
                    cout << "1. Major\n";
                    cout << "2. Minor\n\n";
                    cout << "or press space to go back\n\n";
                    swChordRec = getch();
                    switch (swChordRec)
                    {
                    case '1':
                        {
                            chord = 'a';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case '2':
                        {
                            chord = 'A';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case ' ':
                        {
                            goto ChordRec;
                        }
                    default:
                        {
                            invalidchoice();
                            goto ChordRec;
                        }
                    }
                    goto ChordRec;
                }
            case 2:
                {
                    system("cls");
                    cout << "C#\n\n";
                    cout << "1. Major\n";
                    cout << "2. Minor\n\n";
                    cout << "or press space to go back\n\n";
                    swChordRec = getch();
                    switch (swChordRec)
                    {
                    case '1':
                        {
                            chord = 'b';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case '2':
                        {
                            chord = 'B';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case ' ':
                        {
                            goto ChordRec;
                        }
                    default:
                        {
                            invalidchoice();
                            goto ChordRec;
                        }
                    }
                    goto ChordRec;
                }
            case 3:
                {
                    system("cls");
                    cout << "D\n\n";
                    cout << "1. Major\n";
                    cout << "2. Minor\n\n";
                    cout << "or press space to go back\n\n";
                    swChordRec = getch();
                    switch (swChordRec)
                    {
                    case '1':
                        {
                            chord = 'c';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case '2':
                        {
                            chord = 'C';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case ' ':
                        {
                            goto ChordRec;
                        }
                    default:
                        {
                            invalidchoice();
                            goto ChordRec;
                        }
                    }
                    goto ChordRec;
                }
            case 4:
                {
                    system("cls");
                    cout << "D#\n\n";
                    cout << "1. Major\n";
                    cout << "2. Minor\n\n";
                    cout << "or press space to go back\n\n";
                    swChordRec = getch();
                    switch (swChordRec)
                    {
                    case '1':
                        {
                            chord = 'd';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case '2':
                        {
                            chord = 'D';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case ' ':
                        {
                            goto ChordRec;
                        }
                    default:
                        {
                            invalidchoice();
                            goto ChordRec;
                        }
                    }
                    goto ChordRec;
                }
            case 5:
                {
                    system("cls");
                    cout << "E\n\n";
                    cout << "1. Major\n";
                    cout << "2. Minor\n\n";
                    cout << "or press space to go back\n\n";
                    swChordRec = getch();
                    switch (swChordRec)
                    {
                    case '1':
                        {
                            chord = 'e';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case '2':
                        {
                            chord = 'E';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case ' ':
                        {
                            goto ChordRec;
                        }
                    default:
                        {
                            invalidchoice();
                            goto ChordRec;
                        }
                    }
                    goto ChordRec;
                }
            case 6:
                {
                    system("cls");
                    cout << "F\n\n";
                    cout << "1. Major\n";
                    cout << "2. Minor\n\n";
                    cout << "or press space to go back\n\n";
                    swChordRec = getch();
                    switch (swChordRec)
                    {
                    case '1':
                        {
                            chord = 'f';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case '2':
                        {
                            chord = 'F';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case ' ':
                        {
                            goto ChordRec;
                        }
                    default:
                        {
                            invalidchoice();
                            goto ChordRec;
                        }
                    }
                    goto ChordRec;
                }
            case 7:
                {
                    system("cls");
                    cout << "F#\n\n";
                    cout << "1. Major\n";
                    cout << "2. Minor\n\n";
                    cout << "or press space to go back\n\n";
                    swChordRec = getch();
                    switch (swChordRec)
                    {
                    case '1':
                        {
                            chord = 'g';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case '2':
                        {
                            chord = 'G';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case ' ':
                        {
                            goto ChordRec;
                        }
                    default:
                        {
                            invalidchoice();
                            goto ChordRec;
                        }
                    }
                    goto ChordRec;
                }
            case 8:
                {
                    system("cls");
                    cout << "G\n\n";
                    cout << "1. Major\n";
                    cout << "2. Minor\n\n";
                    cout << "or press space to go back\n\n";
                    swChordRec = getch();
                    switch (swChordRec)
                    {
                    case '1':
                        {
                            chord = 'h';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case '2':
                        {
                            chord = 'H';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case ' ':
                        {
                            goto ChordRec;
                        }
                    default:
                        {
                            invalidchoice();
                            goto ChordRec;
                        }
                    }
                    goto ChordRec;
                }
            case 9:
                {
                    system("cls");
                    cout << "G#\n\n";
                    cout << "1. Major\n";
                    cout << "2. Minor\n\n";
                    cout << "or press space to go back\n\n";
                    swChordRec = getch();
                    switch (swChordRec)
                    {
                    case '1':
                        {
                            chord = 'i';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case '2':
                        {
                            chord = 'I';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case ' ':
                        {
                            goto ChordRec;
                        }
                    default:
                        {
                            invalidchoice();
                            goto ChordRec;
                        }
                    }
                    goto ChordRec;
                }
            case 10:
                {
                    system("cls");
                    cout << "A\n\n";
                    cout << "1. Major\n";
                    cout << "2. Minor\n\n";
                    cout << "or press space to go back\n\n";
                    swChordRec = getch();
                    switch (swChordRec)
                    {
                    case '1':
                        {
                            chord = 'j';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case '2':
                        {
                            chord = 'J';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case ' ':
                        {
                            goto ChordRec;
                        }
                    default:
                        {
                            invalidchoice();
                            goto ChordRec;
                        }
                    }
                    goto ChordRec;
                }
            case 11:
                {
                    system("cls");
                    cout << "A#\n\n";
                    cout << "1. Major\n";
                    cout << "2. Minor\n\n";
                    cout << "or press space to go back\n\n";
                    swChordRec = getch();
                    switch (swChordRec)
                    {
                    case '1':
                        {
                            chord = 'k';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case '2':
                        {
                            chord = 'K';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case ' ':
                        {
                            goto ChordRec;
                        }
                    default:
                        {
                            invalidchoice();
                            goto ChordRec;
                        }
                    }
                    goto ChordRec;
                }
            case 12:
                {
                    system("cls");
                    cout << "B\n\n";
                    cout << "1. Major\n";
                    cout << "2. Minor\n\n";
                    cout << "or press space to go back\n\n";
                    swChordRec = getch();
                    switch (swChordRec)
                    {
                    case '1':
                        {
                            chord = 'l';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case '2':
                        {
                            chord = 'L';
                            recordchords << chord;
                            cout << "How many beats do you want the chord to play for?\n\n";
                            cin >> chordlength;
                            recordlength.write((char*)&chordlength, sizeof(chordlength));
                            break;
                        }
                    case ' ':
                        {
                            goto ChordRec;
                        }
                    default:
                        {
                            invalidchoice();
                            goto ChordRec;
                        }
                    }
                    goto ChordRec;
                }
            case 0:
                {
                    char ch1;
                    system("cls");
                    cout << "Enter a record name\n\n";
                    cin.get(ch1);
                    cin >> ChordRecName;
                    recordchordnames << ChordRecName << "\n";
                    recordchordnames.close();
                    recordchords.close();
                    recordlength.close();
                    goto ChordsM;
                }
            }
        }
    ChordLoad:
        {
            system("cls");
            ifstream loadchords ("CHORDS.DAT");
            char ch = ' ', opCLoad, opCLoad2;
            counterCW = 0;
            loadchords.seekg(0);
            while (!loadchords.eof())
            {
                loadchords.get(ch);
                if (ch == '$')
                    counterCW++;
            }
            loadchords.close();
            cout << "Number of recordings: " << counterCW << endl << endl;
            cout << "1. Play recording\n";
            cout << "2. Delete all recordings\n";
            cout << "3. Chord Writing Menu\n\n";
            opCLoad = getch();
            switch (opCLoad)
            {
                case '1' : goto ChordPlay;
                case '2' :
                    {
                        system("cls");
                        cout << "Are you sure you want to delete all recordings? (y/n)\n";
                        opCLoad2 = getch();
                        if (opCLoad2 == 'y' || opCLoad2 == 'Y')
                        {
                            ofstream clearchordnames ("CHORDRECORDINGS.DAT", ios :: trunc);
                            ofstream clearchords ("CHORDS.DAT", ios :: trunc);
                            ofstream clearlengths ("CHORDLENGTHS.DAT", ios :: trunc);
                            ofstream clearbpm ("BPM.DAT", ios :: trunc);
                            clearchords.close();
                            clearlengths.close();
                            clearbpm.close();
                            cout << "Recordings deleted";
                            Sleep(2000);
                        }
                        goto ChordsM;
                    }
                case '3' : goto ChordsM;
            }
        }
    ChordPlay:
        {
            system("cls");
            char ch, recName [50];
            double secondconv, bpm, chordlength;
            ifstream loadchordnames ("CHORDRECORDINGS.DAT");
            int recno, counter2 = 0, counter3 = 0;
            cout << "Which recording would you like to play?\n\n";
            loadchordnames.seekg(0);
            while (counter3 < counterCW)
            {
                counter3 ++;
                cout << counter3 << ". ";
                loadchordnames.seekg(1, ios :: cur);
                loadchordnames >> recName;
                puts(recName);
            }
            cout << endl;
            cin >> recno;
            if (recno > counterCW)
            {
                invalidchoice();
                goto ChordLoad;
            }
            else
            {
                ifstream playchords ("CHORDS.DAT");
                ifstream playlengths ("CHORDLENGTHS.DAT");
                ifstream bpmmatch ("BPM.DAT");
                playchords.seekg(0);
                do
                {
                    playchords.get(ch);
                    if (ch == '$')
                        counter2++;
                } while (counter2 != recno);
                counter2 = 0;
                playlengths.seekg(0);
                do
                {
                    playlengths.get(ch);
                    if (ch == '$')
                        counter2++;
                } while (counter2 != recno);
                counter2 = 0;
                bpmmatch.seekg(0);
                do
                {
                    bpmmatch.get(ch);
                    if (ch == '$')
                        counter2++;
                } while (counter2 != recno);
                bpmmatch.read((char*)&bpm, sizeof(bpm));
                secondconv = 60 / bpm;
                playchords.get(ch);
                if (recno == counterCW)
                {
                     while (!playchords.eof())
                    {
                        playchord(ch);
                        playlengths.read((char*)&chordlength, sizeof(chordlength));
                        Sleep(1000 * secondconv * chordlength);
                        playchords.get(ch);
                    }
                }
                else
                {
                    while (ch != '$')
                    {
                        playchord(ch);
                        playlengths.read((char*)&chordlength, sizeof(chordlength));
                        Sleep(1000 * secondconv * chordlength);
                        playchords.get(ch);
                    }
                }
                system("cls");
                cout << "Recording Over\n";
                Sleep(2000);
                goto ChordLoad;
            }
        }
    MType:
        {
            char opMType;
            system("cls");
            cout << "*-*-*-*-*-*-*-*\nMUSICAL TYPING:\n*-*-*-*-*-*-*-*\n\n";
            cout << "1. Practice\n";
            cout << "2. Record\n";
            cout << "3. Load recording\n";
            cout << "4. Main Menu\n\n";
            opMType = getch();
            switch (opMType)
            {
                case '1' : goto MTypePrac;
                case '2' : goto MTypeRec;
                case '3' : goto MTypeLoad;
                case '4' : goto mainmenu;
                default :
                    {
                        invalidchoice();
                        goto MType;
                    }
            }
        }
    MTypePrac:
        {
            system("cls");
            cout << "Press the space bar to exit or refer to the following:\n\n";
            cout << "a = C\nw = C#\ns = D\ne = D#\nd = E\nf = F\nt = F#\ng = G\ny = G#\nh = A\nu = A#\nj = B\nk = C\no = C#\nl = D\n\n";
            char note = '*';
            while (note != ' ')
            {
                note = getch();
                playnote(note);
            }
            goto MType;
        }
    MTypeRec:
        {
            char opMTypeRec = '*', note = '*', temp = '$';
            clock_t begin, end;
            ofstream recordnotes ("NOTERECORDINGS.DAT", ios :: app);
            ofstream recordtime ("TIMERECORDINGS.DAT", ios :: app | ios :: binary);
            double time_buffer;
            ofstream writemelodynames ("MELODYRECORDINGS.DAT", ios :: app);
            system("cls");
            cout << "Press the space bar to start recording and again to stop or press any key to go back to the menu.\n\n";
            opMTypeRec = getch();
            if (opMTypeRec == ' ')
            {
                recordnotes << '$';
                writemelodynames << '$';
                recordtime.write((char*)&temp, sizeof(temp));
                for (int i = 3; i > 0; i--)
                {
                    system("cls");
                    cout << i;
                    Sleep(1000);
                }
                system("cls");
                cout << "Start\n\n";
                cout << "a = C\nw = C#\ns = D\ne = D#\nd = E\nf = F\nt = F#\ng = G\ny = G#\nh = A\nu = A#\nj = B\nk = C\no = C#\nl = D\n\n";
                while (note != ' ')
                {
                    begin = clock();
                    note = getch();
                    playnote(note);
                    end = clock();
                    time_buffer = (double)(end - begin) / CLOCKS_PER_SEC;
                    if (note != ' ')
                    {
                        recordtime.write((char*)&time_buffer, sizeof(time_buffer));
                        recordnotes << note;
                    }
                }
            }
            system("cls");
            cout << "Enter a record name\n\n";
            //char ch1;
            //cin.get(ch1);
            cin >> MelodyRecName;
            writemelodynames << MelodyRecName << "\n";
            writemelodynames.close();
            recordtime.close();
            recordnotes.close();
            goto MType;
        }
    MTypeLoad:
        {
            system("cls");
            char ch = ' ', opMTypeLoad, opMTypeLoad2;
            ifstream loadnotes ("NOTERECORDINGS.DAT");
            ifstream loadtime ("TIMERECORDINGS.DAT", ios :: binary);
            counterMTL = 0;
            loadnotes.seekg(0);
            while (!loadnotes.eof())
            {
                loadnotes.get(ch);
                if (ch == '$')
                    counterMTL++;
            }
            loadnotes.close();
            loadtime.close();
            cout << "Number of recordings: " << counterMTL << endl << endl;
            cout << "1. Play recording\n";
            cout << "2. Delete all recordings\n";
            cout << "3. Musical Typing Menu\n\n";
            opMTypeLoad = getch();
            switch (opMTypeLoad)
            {
                case '1' : goto MTypePlay;
                case '2' :
                    {
                        system("cls");
                        cout << "Are you sure you want to delete all recordings? (y/n)\n";
                        opMTypeLoad2 = getch();
                        if (opMTypeLoad2 == 'y' || opMTypeLoad2 == 'Y')
                        {
                            ofstream clearnotes ("NOTERECORDINGS.DAT", ios :: trunc);
                            ofstream clearmelodynames ("MELODYRECORDINGS.DAT", ios :: trunc);
                            ofstream cleartime ("TIMERECORDINGS.DAT", ios :: binary | ios :: trunc);
                            clearnotes.close();
                            clearmelodynames.close();
                            cleartime.close();
                            cout << "Recordings deleted";
                            Sleep(2000);
                        }
                        goto MType;
                    }
                case '3' : goto MType;
            }
        }
    MTypePlay:
        {
            system("cls");
            char ch, recName [50];
            ifstream readmelodynames ("MELODYRECORDINGS.DAT");
            double time_buffer;
            int recno, counter2 = 0, counter3 = 0;
            cout << "Which recording would you like to play?\n";
            while (counter3 < counterMTL)
            {
                counter3 ++;
                cout << counter3 << ". ";
                readmelodynames.seekg(1, ios :: cur);
                readmelodynames >> recName;
                puts(recName);
            }
            cout << endl;
            cin >> recno;
            if (recno > counterMTL)
            {
                invalidchoice();
                goto MTypeLoad;
            }
            else
            {
                ifstream playnotes ("NOTERECORDINGS.DAT");
                ifstream playtime ("TIMERECORDINGS.DAT", ios :: binary);
                playnotes.seekg(0);
                do
                {
                    playnotes.get(ch);
                    if (ch == '$')
                        counter2++;
                } while (counter2 != recno);
                counter2 = 0;
                playtime.seekg(0);
                do
                {
                    playtime.get(ch);
                    if (ch == '$')
                        counter2++;
                } while (counter2 != recno);
                playnotes.get(ch);
                if (recno == counterMTL)
                {
                     while (!playnotes.eof())
                    {
                        playtime.read((char*)&time_buffer, sizeof(time_buffer));
                        Sleep(1000 * time_buffer);
                        playnote(ch);
                        playnotes.get(ch);
                    }
                }
                else
                {
                    while (ch != '$')
                    {
                        playtime.read((char*)&time_buffer, sizeof(time_buffer));
                        Sleep(1000 * time_buffer);
                        playnote(ch);
                        playnotes.get(ch);
                    }
                }
                system("cls");
                cout << "Recording Over\n";
                Sleep(2000);
                goto MTypeLoad;
            }
        }
    ChordsPrev:
        {
            int opChordPrev;
            system("cls");
            cout << "Choose a root note:\n\n";
            cout << "1. C\n2. C#\n3. D\n4. D#\n5. E\n6. F\n7. F#\n8. G\n9. G#\n10. A\n11. A#\n12. B\n\n";
            cout << "or type '0' to go back\n\n";
            cin >> opChordPrev;
            switch (opChordPrev)
            {
            case 1:
                goto ChordPrevC;
            case 2:
                goto ChordPrevCs;
            case 3:
                goto ChordPrevD;
            case 4:
                goto ChordPrevDs;
            case 5:
                goto ChordPrevE;
            case 6:
                goto ChordPrevF;
            case 7:
                goto ChordPrevFs;
            case 8:
                goto ChordPrevG;
            case 9:
                goto ChordPrevGs;
            case 10:
                goto ChordPrevA;
            case 11:
                goto ChordPrevAs;
            case 12:
                goto ChordPrevB;
            case 0:
                goto ChordsM;
            default:
                {
                    invalidchoice();
                    goto ChordsM;
                }
            }
            goto ChordsPrev;
        }
    ChordPrevC:
        {
            system("cls");
            cout << "C\n\n";
            cout << "1. Major\n";
            cout << "2. Minor\n\n";
            cout << "or press space to go back\n\n";
            swChordPrev = getch();
            switch (swChordPrev)
            {
            case '1':
                {
                    PlaySound(TEXT("Piano Chords\\C\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case '2':
                {
                    PlaySound(TEXT("Piano Chords\\C\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case ' ':
                {
                    goto ChordsPrev;
                }
            default:
                {
                    invalidchoice();
                    goto ChordsPrev;
                }
            }
            goto ChordPrevC;
        }
    ChordPrevCs:
        {
            system("cls");
            cout << "C#\n\n";
            cout << "1. Major\n";
            cout << "2. Minor\n\n";
            cout << "or press space to go back\n\n";
            swChordPrev = getch();
            switch (swChordPrev)
            {
            case '1':
                {
                    PlaySound(TEXT("Piano Chords\\Cs\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case '2':
                {
                    PlaySound(TEXT("Piano Chords\\Cs\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case ' ':
                {
                    goto ChordsPrev;
                }
            default:
                {
                    invalidchoice();
                    goto ChordsPrev;
                }
            }
            goto ChordPrevCs;
        }
    ChordPrevD:
        {
            system("cls");
            cout << "D\n\n";
            cout << "1. Major\n";
            cout << "2. Minor\n\n";
            cout << "or press space to go back\n\n";
            swChordPrev = getch();
            switch (swChordPrev)
            {
            case '1':
                {
                    PlaySound(TEXT("Piano Chords\\D\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case '2':
                {
                    PlaySound(TEXT("Piano Chords\\D\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case ' ':
                {
                    goto ChordsPrev;
                }
            default:
                {
                    invalidchoice();
                    goto ChordsPrev;
                }
            }
            goto ChordPrevD;
        }
    ChordPrevDs:
        {
            system("cls");
            cout << "D#\n\n";
            cout << "1. Major\n";
            cout << "2. Minor\n\n";
            cout << "or press space to go back\n\n";
            swChordPrev = getch();
            switch (swChordPrev)
            {
            case '1':
                {
                    PlaySound(TEXT("Piano Chords\\Ds\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case '2':
                {
                    PlaySound(TEXT("Piano Chords\\Ds\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case ' ':
                {
                    goto ChordsPrev;
                }
            default:
                {
                    invalidchoice();
                    goto ChordsPrev;
                }
            }
            goto ChordPrevDs;
        }
    ChordPrevE:
        {
            system("cls");
            cout << "E\n\n";
            cout << "1. Major\n";
            cout << "2. Minor\n\n";
            cout << "or press space to go back\n\n";
            swChordPrev = getch();
            switch (swChordPrev)
            {
            case '1':
                {
                    PlaySound(TEXT("Piano Chords\\E\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case '2':
                {
                    PlaySound(TEXT("Piano Chords\\E\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case ' ':
                {
                    goto ChordsPrev;
                }
            default:
                {
                    invalidchoice();
                    goto ChordsPrev;
                }
            }
            goto ChordPrevE;
        }
    ChordPrevF:
        {
            system("cls");
            cout << "F\n\n";
            cout << "1. Major\n";
            cout << "2. Minor\n\n";
            cout << "or press space to go back\n\n";
            swChordPrev = getch();
            switch (swChordPrev)
            {
            case '1':
                {
                    PlaySound(TEXT("Piano Chords\\F\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case '2':
                {
                    PlaySound(TEXT("Piano Chords\\F\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case ' ':
                {
                    goto ChordsPrev;
                }
            default:
                {
                    invalidchoice();
                    goto ChordsPrev;
                }
            }
            goto ChordPrevF;
        }
    ChordPrevFs:
        {
            system("cls");
            cout << "F#\n\n";
            cout << "1. Major\n";
            cout << "2. Minor\n\n";
            cout << "or press space to go back\n\n";
            swChordPrev = getch();
            switch (swChordPrev)
            {
            case '1':
                {
                    PlaySound(TEXT("Piano Chords\\Fs\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case '2':
                {
                    PlaySound(TEXT("Piano Chords\\Fs\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case ' ':
                {
                    goto ChordsPrev;
                }
            default:
                {
                    invalidchoice();
                    goto ChordsPrev;
                }
            }
            goto ChordPrevFs;
        }
    ChordPrevG:
        {
            system("cls");
            cout << "G\n\n";
            cout << "1. Major\n";
            cout << "2. Minor\n\n";
            cout << "or press space to go back\n\n";
            swChordPrev = getch();
            switch (swChordPrev)
            {
            case '1':
                {
                    PlaySound(TEXT("Piano Chords\\G\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case '2':
                {
                    PlaySound(TEXT("Piano Chords\\G\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case ' ':
                {
                    goto ChordsPrev;
                }
            default:
                {
                    invalidchoice();
                    goto ChordsPrev;
                }
            }
            goto ChordPrevG;
        }
    ChordPrevGs:
        {
            system("cls");
            cout << "G#\n\n";
            cout << "1. Major\n";
            cout << "2. Minor\n\n";
            cout << "or press space to go back\n\n";
            swChordPrev = getch();
            switch (swChordPrev)
            {
            case '1':
                {
                    PlaySound(TEXT("Piano Chords\\Gs\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case '2':
                {
                    PlaySound(TEXT("Piano Chords\\Gs\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case ' ':
                {
                    goto ChordsPrev;
                }
            default:
                {
                    invalidchoice();
                    goto ChordsPrev;
                }
            }
            goto ChordPrevGs;
        }
    ChordPrevA:
        {
            system("cls");
            cout << "A\n\n";
            cout << "1. Major\n";
            cout << "2. Minor\n\n";
            cout << "or press space to go back\n\n";
            swChordPrev = getch();
            switch (swChordPrev)
            {
            case '1':
                {
                    PlaySound(TEXT("Piano Chords\\A\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case '2':
                {
                    PlaySound(TEXT("Piano Chords\\A\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case ' ':
                {
                    goto ChordsPrev;
                }
            default:
                {
                    invalidchoice();
                    goto ChordsPrev;
                }
            }
            goto ChordPrevA;
        }
    ChordPrevAs:
        {
            system("cls");
            cout << "A#\n\n";
            cout << "1. Major\n";
            cout << "2. Minor\n\n";
            cout << "or press space to go back\n\n";
            swChordPrev = getch();
            switch (swChordPrev)
            {
            case '1':
                {
                    PlaySound(TEXT("Piano Chords\\As\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case '2':
                {
                    PlaySound(TEXT("Piano Chords\\As\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case ' ':
                {
                    goto ChordsPrev;
                }
            default:
                {
                    invalidchoice();
                    goto ChordsPrev;
                }
            }
            goto ChordPrevAs;
        }
    ChordPrevB:
        {
            system("cls");
            cout << "B\n\n";
            cout << "1. Major\n";
            cout << "2. Minor\n\n";
            cout << "or press space to go back\n\n";
            swChordPrev = getch();
            switch (swChordPrev)
            {
            case '1':
                {
                    PlaySound(TEXT("Piano Chords\\B\\Major.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case '2':
                {
                    PlaySound(TEXT("Piano Chords\\B\\Minor.wav"), NULL, SND_FILENAME | SND_ASYNC);
                    break;
                }
            case ' ':
                {
                    goto ChordsPrev;
                }
            default:
                {
                    invalidchoice();
                    goto ChordsPrev;
                }
            }
            goto ChordPrevB;
        }
    return 0;
}
