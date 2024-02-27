FROM alpine as build-env
RUN apk add --no-cache build-base cmake
WORKDIR /app
COPY CMakeLists.txt .
# COPY include ./include
# COPY src ./src
# COPY make_debug.sh .
COPY . .
RUN mkdir -p /app/build && chmod -R 777 /app/build
RUN cmake . && make
CMD ["./basalt"]
