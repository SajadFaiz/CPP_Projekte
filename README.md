# Teil 1: Ohne UI
## C++ Projekt zur Autosimulation

Dieses Projekt ist im Wesentlichen eine Erweiterung eines vorherigen Projekts, das aus einfachen Strukturen bestand und keine Benutzeroberfläche hatte.
Es wurde vollständig in C++ geschrieben und simuliert ein Auto, das physikalische Größen wie Position, Geschwindigkeit und Beschleunigung berücksichtigt.
Das Auto kann zwischen verschiedenen Zuständen wechseln, um das Verhalten eines echten Autos realistisch nachzubilden.

# Verfügbare Zustände:

**Offstate:** Das Auto ist ausgeschaltet. 

**Neutralstate:** Das Auto befindet sich im Leerlauf, es ist eingeschaltet, aber steht still.

**Accel state:** Das Auto beschleunigt, und alle Werte für Position, Geschwindigkeit und Beschleunigung werden berechnet.

**Deccel state:** Das Auto kann rückwärts fahren, jedoch nur, wenn es sich im Leerlauf befindet.

# Zusätzliche verfügbare Funktionen:

**Up:** Das Auto kann sich in positiver Y-Richtung bewegen.

**Down:** Das Auto kann sich in negativer Y-Richtung bewegen.

**Turn off:** Das Auto kann durch einen Befehl ausgeschaltet werden, ähnlich wie beim Starten des Autos.
Alle diese Funktionen sind in der Programmlogik implementiert und können durch entsprechende Befehle gesteuert werden.

# Ergebnisse in unterschiedlichen Zuständen 
![Zustände](https://github.com/user-attachments/assets/89a4db42-9cb8-4ab1-b3cc-87524c11abd1)

# Teil 2: Mit UI
##  C++ Projekt mit Qt und QML Integration

Dieses Projekt basiert auf einer Autosimulation, die mit C++ geschrieben wurde, und wurde um eine grafische Benutzeroberfläche erweitert. Die Integration erfolgt über Qt-Signale und die QML-Sprache.
Das Projekt simuliert ein Auto, das physikalische Größen wie Position, Geschwindigkeit und Beschleunigung berücksichtigt. Es kann zwischen verschiedenen Zuständen wechseln, um das Verhalten eines echten Autos realistisch nachzubilden.

# Verfügbare Zustände:

**Offstate:** Das Auto ist ausgeschaltet.

**Neutralstate:** Das Auto befindet sich im Leerlauf, es ist eingeschaltet, aber steht still.

**Accel state:** Das Auto beschleunigt, und alle Werte für Position, Geschwindigkeit und Beschleunigung werden berechnet.

**Deccel state:** Das Auto kann rückwärts fahren, jedoch nur, wenn es sich im Leerlauf befindet.

# Zusätzliche verfügbare Funktionen:

**Up:** Das Auto kann sich in positiver Y-Richtung bewegen.

**Down:** Das Auto kann sich in negativer Y-Richtung bewegen.

**Turn off:** Das Auto kann per Befehl ausgeschaltet werden, ähnlich wie beim Starten des Autos.
Benutzeroberfläche (UI):

