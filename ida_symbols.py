import json
import idaapi

with open(idaapi.get_input_file_path() + ".json") as json_file:
    data = json.load(json_file)
    for entry in data["symbols"]:
        idaapi.set_name(entry["va"], entry["name"])
    for entry in data["labels"]:
        idaapi.set_cmt(entry["va"], entry["name"], 0) # int(entry["va"], 16)