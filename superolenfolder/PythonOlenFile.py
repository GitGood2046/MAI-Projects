from azure.storage.blob import BlockBlobService
block_blob_service = BlockBlobService(account_name='storagemai11', account_key='8X84HpkncAFPuhlABedJGGSGolGYxbkxHVrE4bUxWH8IrRMCB46gmV7aDPkMIL3gh6rUGnNNcOQgXAetuBqTKQ==')
# https://storagemai11.blob.core.windows.net/pictures/images.jpg
block_blob_service.set_container_acl('storagemai11', public_access=PublicAccess.Container)
from azure.storage.blob import ContentSettings
block_blob_service.create_blob_from_path(
    'storagemai11',
    'pictures',
    'D:\\pics\\images.jpg',
    content_settings=ContentSettings(content_type='image/png')
            )
