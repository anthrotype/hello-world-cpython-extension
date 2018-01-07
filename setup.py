from setuptools import setup, Extension


setup(
    name='hello_world',
    version='1.0',
    description='Python Package with Hello World C Extension',
    ext_modules=[
        Extension(
            'hello_world',
            sources=['hello_world.c'],
            py_limited_api=True)
    ],
)