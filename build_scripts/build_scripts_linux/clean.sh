echo "linux build"
if [ -d "build" ] 
then
    rmdir -rf build
else
    echo "Build doesn't exist" 
fi
