sudo apt-get update
sudo apt-get install git libboost-all-dev make g++ pkg-config openssl

cd Libraries/libmnl-1.0.3/
sudo chmod +x ./configure
./configure
make
sudo make install

cd ../libnfnetlink-1.0.1/
sudo chmod +x ./configure
make
sudo make install


cd ../libnetfilter_queue-1.0.2/
sudo chmod +x ./configure
make
sudo make install