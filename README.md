# cpp-setting-out-and-adding-packages-with-vcpkg

clone vcpkg manager into your Project directory via the below repository link
git clone https://github.com/Microsoft/vcpkg.git

After cloning, within the vcpkg directory cloned lookout for the below files:
bootstrap-vcpkg.sh
bootstrap-vcpkg.bat
depending on your operating system, run the required file where first option is to be used for Mac Os and second Option for Windows.

when out of the parent directory , command for running is ./vcpkg/bootstrap-vcpkg.** 
when current directory is */vcpkg then run should be ./bootstrap-vcpkg.** 


after installing the vcpkg that goes with your operating system, install your prefered c++ package using the below command
./vcpkg/vcpkg search ** - when found outside the vcpkg directory
the above is used to lookout first if the package is first available for use.

to install say boost-asio use the beloe code
./vcpkg/vcpkg install boost-asio

configurations in my cmake file will handle the rest...
