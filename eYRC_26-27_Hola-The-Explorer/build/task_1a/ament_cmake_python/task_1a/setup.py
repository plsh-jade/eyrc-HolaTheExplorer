from setuptools import find_packages
from setuptools import setup

setup(
    name='task_1a',
    version='0.0.1',
    packages=find_packages(
        include=('task_1a', 'task_1a.*')),
)
