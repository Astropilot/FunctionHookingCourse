<h1 align="center">
  Function Hooking Course
</h1>

<p align="center">
  <a href="https://github.com/Astropilot/FunctionHookingCourse/blob/master/LICENSE">
    <img src="https://img.shields.io/github/license/Astropilot/FunctionHookingCourse"
         alt="MIT License">
  </a>
  <img src="https://img.shields.io/badge/Made%20with-%E2%9D%A4%EF%B8%8F-yellow.svg">
</p>

<p align="center">
  <a href="#about">About</a> •
  <a href="#demo-usage">Demo Usage</a> •
  <a href="#references-and-authors">References and Authors</a> •
  <a href="#license">License</a>
</p>

## About

As part of my software security course at ISEP, we had to do a presentation on a low-level security flaw. We chose Function Hooking as a topic because it is for me a game hacking topic that I am passionate about.
This github repository contains the powerpoint support (in pdf) used for the presentation as well as the source code and the binary files of the demonstration presented in class.

## Demo Usage

If you want to directly test the demo the pre-compiled binaries are available in the `DemoBinairies` folder, they have been compiled under Windows 10 and should work on 32 and 64 bits machines.

The source code of the demo files are also available in the `DemoCode` folder, this is a Visual Studio solution containing two projects, the target program and the malicious program that will perform the detour. You can easily modify and compile this solution. However, be careful to change the address of the function to be detoured because its address may change during a recompilation.

## References and Authors

* [How to Hook Functions - Code Detouring Guide / Guided Hacking](https://guidedhacking.com/threads/how-to-hook-functions-code-detouring-guide.14185/?__cf_chl_f_tk=BkO8RJrrLTrzeAjIDoDRzIU1FPQGjkB.5cW6Jge23A8-1642420247-0-gaNycGzNB6U)
* [x86 API Hooking Demystified / Jurriaan Bremer](http://jbremer.org/x86-api-hooking-demystified/)
* [Analysis and detection of online game cheating software / Tomas Curda](https://is.muni.cz/th/qe1y3/bk.pdf)

Presentation created by:
* Yohann MARTIN
* Augustin Rousset-Rouviere
* Matteo Daluz
* Rohail Shabbir
* Nathan Longa

## License

MIT - See LICENSE file