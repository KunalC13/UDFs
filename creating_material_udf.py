import csv


input_csv_file = "material_csv/viscoscity.csv"

output_udf_file = "viscosity_udf.c"

temperature = []
viscosity = []

with open(input_csv_file, mode="r") as csv_file:
    csv_reader = csv.reader(csv_file)
    for row in csv_reader:
        if len(row) == 2:
            temp, visc = row
            try:
                temperature.append(float(temp))
                viscosity.append(float(visc))
            except ValueError:
                pass

with open(output_udf_file, "w") as udf_file:
    udf_file.write("#include \"udf.h\"\n\n")
    udf_file.write("DEFINE_PROPERTY(viscosity, c, t)\n")
    udf_file.write("{\n")
    udf_file.write("    real temperature = C_T(c, t); // Temperature at cell centroid\n")
    udf_file.write("    real viscosity;\n\n")
    udf_file.write("    // Define your temperature-viscosity relationship here\n")

    for i in range(len(temperature)):
        # Check if temperature falls within a specific range
        if i < len(temperature) - 1:
            lower_temp = temperature[i]
            upper_temp = temperature[i + 1]
            visc = viscosity[i]

            udf_file.write(f"    if (temperature >= {lower_temp} && temperature <= {upper_temp})\n")
            udf_file.write("    {\n")
            udf_file.write(f"        viscosity = {visc};\n")
            udf_file.write("    }\n")

    udf_file.write("    else\n")
    udf_file.write("    {\n")
    udf_file.write("        viscosity = 0.0; // Return a default value for out-of-range temperatures\n")
    udf_file.write("    }\n\n")
    udf_file.write("    return viscosity;\n")
    udf_file.write("}\n")

print(f"UDF code for viscosity written to {output_udf_file}")
