from setuptools import find_packages
from setuptools import setup

setup(
    name='shape_interface',
    version='0.0.0',
    packages=find_packages(
        include=('shape_interface', 'shape_interface.*')),
)
