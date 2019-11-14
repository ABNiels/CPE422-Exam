g++ Problem1/derek_LED.cpp Problem1/GPIO.cpp Problem1/control-gpio.cpp -o Problem1/control-gpio -pthread

echo "Problem 1 compiled..."

g++ Problems23/record-temperature.cpp -o Problems23/record-temperature
echo "Problem 2 compiled..."
g++ Problems23/process-temp.cpp -o Problems23/process-temp 
echo "Problem 3 compiled"

config-pin -a p8.14 in+
config-pin -a p8.16 in+
echo "Buttons configured with pull-up resistors"
