FROM ubuntu:20.04
RUN apt add --no-cache build-base cmake
WORKDIR /app
# COPY CMakeLists.txt .
# COPY include ./include
# COPY src ./src
# COPY make_debug.sh .
COPY . .
RUN mkdir -p /app/build && chmod -R 777 /app/build
WORKDIR /app
RUN cmake ./ && make
CMD ["./basalt"]
