# ROS IMC Broker

ROS IMC Broker is a [ROS](http://www.ros.org/) package that enables
interoperability between ROS nodes and
[IMC](https://github.com/oceanscan/imc) capable systems.

Trying It
=========

If you have Docker installed in your system you can navigate to the folder
"docker" and use the script docker.bash to create a docker container with
all the required software packages (build tools, ROS, DUNE, etc).

* To build the docker container navigate to the "docker" folder and issue
  the following command on a terminal:

```
bash docker.bash build
```

* Once the container is built you can open a terminal inside it by issuing
  the following command on a terminal:

```
bash docker.bash
```

This command will mount the folder "workspace" inside the container
instance. This way you can change the source code outside the container
and these changes will be reflected inside the container instance.

* To compile the broker issue the following command inside the running container:

```
catkin_make
```

This will compile the broker and some example nodes.

* To launch the follow reference example issue the following command
  inside the running container:

```
bash start.bash
```

This command will start one instance of the DUNE's LAUV simulator, the ROS
IMC broker, and the Follow Reference Controller node. This simple
controller uses DUNE's high-level control layer to move the vehicle around
a square.

Updating IMC definitions
========================

To recreate the bindings for custom IMC messages, the bindings needs to be created using the python-script `imc-translator.py`. Example command:
```
cd workspace/translator &&
python imc-translator.py --xml=<path-to>/IMC.xml --output=../src/ros_imc_broker/include/ros_imc_broker/ImcTypes.hpp
```
