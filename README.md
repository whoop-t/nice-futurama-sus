# nice-futurama-sus

> [!IMPORTANT]
> WIP NOT DONE

![Preview](https://github.com/whoop-t/nice-adventure-time/blob/main/.github/assets/fj.jpg?raw=true)

## Quick setup

In your ZMK firmware, add the following:

Add remote to `west.yaml`
```yaml
manifest:
  remotes:
    - name: zmkfirmware
      url-base: https://github.com/zmkfirmware
    - name: whoop-t #new entry
      url-base: https://github.com/whoop-t #new entry
  projects:
    - name: zmk
      remote: zmkfirmware
      revision: main
      import: app/west.yml
    - name: nice-futurama-sus #new entry
      remote: whoop-t #new entry
      revision: main #new entry
  self:
    path: config
```

Add this module to `build.yaml`(this is for corne, but change for your keyboard)
```yaml
include:
  - board: nice_nano_v2
    shield: corne_left nice_view_adapter nice_futurama_sus #update entry
  - board: nice_nano_v2
    shield: corne_right nice_view_adapter nice_futurama_sus #update entry
```

## Acknowledgements
### Original inspiration
https://github.com/M165437/nice-view-gem

### Making the art
https://www.pixilart.com

### Coverting art to C code
https://javl.github.io/image2cpp/

### Other image processing
https://www.iloveimg.com/
