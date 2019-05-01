
This module adds PCL to tp_pipeline. To use this you will need to install PCL.

## Installing PCL

### Install Fedora
```
dnf install -y pcl pcl-devel

#Find the installed location

locate sac_model.h
#/usr/include/pcl-1.8/pcl/sample_consensus/sac_model.h

#Add something like this to your project.inc file
#  INCLUDEPATH += /usr/include/pcl-1.8/
#  LIBS += -lpcl_search
#  LIBS += -lpcl_segmentation
#  LIBS += -lpcl_sample_consensus

```

### Install Mac
```
brew install pcl
sudo /usr/libexec/locate.updatedb
locate pcl
#/usr/local/Cellar/pcl/1.9.1_1/include/pcl-1.9/
```

### Devel
```
mkdir pcl
cd pcl/
git clone https://github.com/PointCloudLibrary/pcl.git

cd ..

```
