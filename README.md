# vscode-cpp-devcontainer
simple vscode project for development cpp in docker

# Usage

## Install Remote Container

Install Extensino for Visual Studio Code. 
[Remote - Containers - Visual Studio Marketplace](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)


## clone repository

```bash
git clone git@github.com:dbgso/vscode-cpp-devcontainer.git # clone project template
code vscode-cpp-devcontainer # open by visual studio code
```

## Open in Container

1. open Command Palette in Visual Studo Code.
2. Exec `Remote-Containers: Reopen Folder in Container`
3. wait until docker-compose build

## Build CMake Project

1. `Cmake: Quick Start` in Command Pallet
1. Configure in dialog
    1. Enter a name for new project.
        * Enter any project name
    1. No CMake kits are available. What would you like to do?
        * `Scan for kits`
    1. Select a Kit
        * `[Unspecified]` 
1. `Cmake: Debug Target`

Then, print `Hello World` into output.
