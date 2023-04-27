% fname: routing_XY__topology_8x8__.m
% ../bin/noxim -routing XY -topology MESH -dimx 8 -dimy 8  -sim 10000 -warmup 2000 -size 8 8 -buffer 4 -config ../config_examples/default_config.yaml -power ../bin/power.yaml 

function [max_pir, max_throughput, min_delay] = routing_XY__topology_8x8__(symbol)

data = [
%             pir      avg_delay     throughput      max_delay   total_energy       rpackets         rflits
             0.01        25.2701      0.0797754            181    8.91393e-06           5106          40845
