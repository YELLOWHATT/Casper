# Casper 

![](https://img.shields.io/badge/C-11-lightblue.svg) ![](https://img.shields.io/badge/license-MIT-lightgray.svg) ![](https://img.shields.io/badge/version-0.0.5-yellow.svg) ![](https://img.shields.io/badge/build-passing-green.svg) 

> A C Optimization Application 

--- 

### Table of Contents 

These are the sections on the README.md file. 

- [Description](#description)
- [How To Use](#how-to-use)
- [Files Included](#files-included) 
- [References](#references) 
- [Contributing](#contributing) 
- [License](#license)
- [Author Info](#author-info)
- [Contributors](#contributors) 
- [Version Info](#version-info)
- [Help](#help) 
- [Info](#info) 

--- 

## Description 

Casper is a C Opitimization Tool to be used for simple applications. 

#### Technologies 

- C 11 
- Shell Script 

#### Other technologies are subject to be used 

--- 

## How To Use 

To use this work simply download it and edit or use it by running it in the GNU C Compiler. 

#### Prerequistites 

You must have the GNU C Compiler if you don't have one run 

```bash 
sudo apt-get install gcc
```

#### Installation 

To install Casper please use the following command and make sure you have the GNU C Compiler. 

```
git clone https://github.com/YELLOWHATT/Casper or Download it 
```

#### Usage 

```c
printf("\nSelect one of the menus please (%s)?", var.menus); 
printf("\n\nEnter the name of the menu or enter anything to exit: ");  
scanf(" %[^\n]s", var.menu); 

if (strcmp(var.menu, "Calculator") == 0)
{
    
    printf("\nGoing to the Calculator");
    printf("\033c"); 
    calculator(); 

} 

else if (strcmp(var.menu, "Currency converter") == 0)
{

    printf("\nGoing to the Currency converter");
    printf("\033c"); 
    currency(); 

}

else 
{

    printf("\nExiting...\n"); 
    return (0); 

}
```
```
input: Calculator

output: Going to Calculator
```

--- 

## Files Included 

- [.gitignore](https://github.com/YELLOWHATT/Casper/blob/master/.gitignore)
- [LICENSE](https://github.com/YELLOWHATT/Casper/blob/master/LICENSE) 
- [README.md](https://github.com/YELLOWHATT/Casper/blob/master/README.md) 
- [CONTRIBUTING.md](https://github.com/YELLOWHATT/Casper/blob/master/CONTRIBUTORS.md)
- [CONTRIBUTIONS.md](https://github.com/YELLOWHATT/Casper/blob/master/CONTRIBUTIONS.md)
- [penguino.c](https://github.com/YELLOWHATT/Casper/blob/master/penguino.c)
- [runp](https://github.com/YELLOWHATT/Casper/blob/master/runp)

#### Files are subject to have their name changed and more files can be included without notice. 

---

## References 

[Back To The Top](#Casper) 

--- 

## Contributing

If you wish to help on this project you can simply make changes to the file and post your changes and if they are appreciated we will merge them to the Master branch. Please read the [CONTRIBUTING.md](https://github.com/YELLOWHATT/Casper/blob/master/CONTRIBUTORS.md) file for more information. If you have contributed to this work known as Darwin you will be credited the file for contributors is [CONTRIBUTIONS.md](https://github.com/YELLOWHATT/Casper/blob/master/CONTRIBUTIONS.md). :) 

--- 

## License 

MIT License 

Copyright (c) [2017] [YELLOWHATT] 

Permission is hereby granted, free of charge, to any person obtainin g a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions: 

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software. 

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT, IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 

See | [LICENSE.md](https://github.com/YELLOWHATT/Casper/blob/master/LICENSE) file or [MIT](https://choosealicense.com/licenses/mit/)|

[Back To The Top](#Casper) 

--- 

## Author Info 

- Github - [YELLOWHATT](https://github.com/YELLOWHATT)

--- 

## Contributors 

- YELLOWHATT

--- 

## Version Info 

The current stable version of Casper is: 0.0.5. 

Summury of Version 0.0.5 is memory allocation features are added and fixes are made. 

--- 

## Help 

If there is a bug please contact us through our social media or email. 

- Email Address: thekoolaidmannn@gmail.com 

--- 

## Info 

If you have any info you are willing to know contact us on the email provided. 

Emails are located in [Help](#help).   

--- 

#### Thank you for giving Casper a look :) 

---

[Back To The Top](#Casper)
