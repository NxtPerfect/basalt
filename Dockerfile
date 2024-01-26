FROM alpine as build-env
RUN apk add --no-cache build-base cmake
WORKDIR /app
COPY CMakeLists.txt /app/
COPY include /app/include
COPY src /app/src
COPY make_debug.sh .
RUN mkdir -p /app/build && chmod -R 777 /app/build
WORKDIR /app/build
RUN cmake /app && make
WORKDIR /app
CMD ['./make_debug.sh']
